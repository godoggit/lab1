# lab1
~skip

int main()

{
	
        int n;//1. input n 
        
	cout << "enter a number for n:";//let user enter a number as n
        
	cin >> n;
        
	while (n != 1)// 3. if n = 1 then STOP寫一個可以讓數字按照規則一直除到1的迴圈
        
	{
		if (n % 2 != 0)n = 3 * n + 1; //4. if n is odd then n ← 3n + 1
                
		else n = n / 2;//5. else n ← n / 
                
		cout << n << endl;//2. print n 可以print數字，記得放在迴圈裡，直到n=1時就會break出來
                
	}
	
	system("pause");
	return 0;

}//end
