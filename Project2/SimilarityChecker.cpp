#include <string>

using namespace std;

void SetBit(int& bitmap, int index)
{
	bitmap |= (1 << index);
}

bool CheckBit(int bitmap, int index)
{
	return bitmap & (1 << index);
}

class SimilarityChecker
{
public:
	static const int MAX_SCORE_BY_ALPHA = 40;

	int getAlphaIndex(char c)
	{
		return (c - 'A');
	}

	int getTotalAlphaCount(const string& s1, const string& s2)
	{
		int count = 0;
		int AlphaCheckBitmap = 0;
		string str = s1 + s2;

		for (char c : str)
		{
			int index = getAlphaIndex(c);

			if (CheckBit(AlphaCheckBitmap, index)) continue;

			SetBit(AlphaCheckBitmap, index);
			count++;			
		}

		return count;
	}

	bool hasSameChar(const string& str, char ch)
	{
		for (char c : str)
		{
			if (c == ch)
				return true;
		}
		return false;
	}

	int getSameAlphaCount(const string& s1, const string& s2)
	{
		int count = 0;
		int AlphaCheckBitmap = 0;

		for (char c : s1)
		{
			int index = getAlphaIndex(c);

			if (CheckBit(AlphaCheckBitmap, index)) continue;

			SetBit(AlphaCheckBitmap, index);

			if (hasSameChar(s2, c))
			{
				count++;
			}			
		}

		return count;
	}

	int getScoreByAlpha(const string& s1, const string& s2)
	{
		return MAX_SCORE_BY_ALPHA *	getSameAlphaCount(s1, s2) / getTotalAlphaCount(s1, s2);
	}
};