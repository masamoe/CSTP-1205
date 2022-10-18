class Fraction {
private:
	int num; //Numerator
	int den; //Denominator

public:
	void Set(int n, int d);
	int GetNum();
	int GetDen();
	int GreatestCommonFactor();
	int LowestCommonDenominator();
}