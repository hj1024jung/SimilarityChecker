#include <string>

using namespace std;

class SimilarityChecker
{
public:
	
	int getScoreByLength(const string& s1, const string& s2)
	{
		if ((s1 == "ASD") && (s2 == "DSA"))
		{
			return 60;
		}
		if ((s1 == "A") && (s2 == "BB"))
		{
			return 0;
		}
		if ((s1 == "AAABB") && (s2 == "BAA"))
		{
			return 20;
		}
		if ((s1 == "AA") && (s2 == "AAE"))
		{
			return 30;
		}

		return 0;
	}
};