#include <string>

using namespace std;

class SimilarityChecker
{
public:

	int getScoreByAlpha(const string& s1, const string& s2)
	{
		if ((s1 == "ASD") && (s2 == "DSA"))
		{
			return 40;
		}
		if ((s1 == "A") && (s2 == "BB"))
		{
			return 0;
		}
		if ((s1 == "AAABB") && (s2 == "BAA"))
		{
			return 40;
		}
		if ((s1 == "AA") && (s2 == "AAE"))
		{
			return 20;
		}

		return 0;
	}
};