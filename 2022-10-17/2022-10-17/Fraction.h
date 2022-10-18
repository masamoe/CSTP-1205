class Fraction {
private:
	int num; //Numerator
	int den; //Denominator

public:
	Fraction();
	Fraction(int n, int d);
	void Set(int n, int d);
	int GetNum();
	int GetDen();
	int GreatestCommonFactor(int a, int b);
	int LowestCommonDenominator(int a, int b);
};