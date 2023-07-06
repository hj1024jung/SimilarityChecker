#include <string>

using namespace std;

int Max(int x, int y) { return (x > y) ? x : y; }
int Min(int x, int y) { return (x < y) ? x : y; }

class SimilarityChecker
{
public:
	
	int getScoreByLength(const string& s1, const string& s2)
	{
		const int MAX_SCORE_BY_LENGTH = 60;

		int length_s1 = Max(s1.length(), s2.length());
		int length_s2 = Min(s1.length(), s2.length());
		int length_gap = (length_s1 - length_s2);

		if(length_s1 == length_s2)
		{
			return MAX_SCORE_BY_LENGTH;
		}

		if((length_s2 * 2) <= length_s1)
		{
			return MIN_SCORE_BY_LENGTH;
		}

		return (MAX_SCORE_BY_LENGTH * (length_s2 - length_gap) / length_s2);
	}

private:
	static const int MAX_SCORE_BY_LENGTH = 60;
	static const int MIN_SCORE_BY_LENGTH = 0;
};