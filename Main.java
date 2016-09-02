package hello;

import java.util.Scanner;

import javax.sound.midi.SysexMessage;
import javax.xml.validation.SchemaFactoryConfigurationError;

public class Main {
	
/*求输入的两个整数之间的数的和
	public static int to_sum(int x,int y)
	{
		int sum = 0,lower,upper;
		if(x > y)
		{
			lower = y;
			upper = x;
		}
		else
		{
			lower = x;
			upper = y;
		}
		for(int i = lower;i <= upper;i++)
		{
			sum += i;
		}
		return sum;
    }
*/
/*为判断素数而定义的函数
	public static boolean isPrime(int i)
	{
		boolean isPrime = true;
		for(int k = 2;k < i;k++)
		{
			if(i % k == 0)
			{
				isPrime = false;
				break;
			}
		}
		return isPrime;
	}
*/
	public static void main(String[] args) {
		// TODO Auto-generated method stub
/*猜数游戏
        Scanner in = new Scanner(System.in);
        int number = (int)(Math.random()*100+1);//[0,1)-->[1,100)-->[0,100]系统产生的随机数是[0,1)
        int a;
        int count = 0;
        do
        {
        	a = in.nextInt();
        	count = count + 1;
        	if(a > number)
        	{
        		System.out.println("偏大");
        	}
        	else if(a < number)
        	{
        		System.out.println("偏小");
        	}
        }while(a != number);
        System.out.println("恭喜你猜对了，你猜了"+count+"次。");
*/
/*求输入整数的位数
		Scanner in = new Scanner(System.in);
		int number;
		System.out.println("请输入一个整数：");
		number = in.nextInt();
		int count = 0;
		do
		{
			count = count + 1;
			number = number / 10;
		}while(number > 0);
		System.out.println("它是"+count+"位数。");
*/
/*整数分解、逆序输出
		Scanner in = new Scanner(System.in);
		int number;
		System.out.println("Please enter an integer:");
		number = in.nextInt();
		int result = 0;
		do{
			int digit = number % 10;
			result = result * 10 + digit;
			System.out.print(digit);
			number = number / 10;
		}while(number > 0);
		System.out.println();
		System.out.println(result);
*/	
/*求阶乘
		Scanner in = new Scanner(System.in);
		System.out.println("Please enter a integer:");
		int n = in.nextInt();
		int factor = 1;
		for(int i = 1;i <= n;i++)
		{
			factor = factor * i;
		}
		System.out.println(factor);
*/		
/*判断素数
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int isPrim = 1;
		for(int i = 2;i < n;i++)
		{
			if(n % i == 0)
			{
				isPrim = 0;
				System.out.println(n+"不是素数");
				break;
			}
		}
		if(isPrim == 1)
		{
			System.out.println(n+"是素数");
		}
		else
		{
			System.out.println(n+"不是素数");
		}
*/
/*输出100以内的素数
		Scanner in = new Scanner(System.in);
		for(int n = 2;n <= 100;n++)
		{
			int isPrim = 1;
			for(int i = 2;i < n;i++)
			{
				if(n % i == 0)
				{
					isPrim = 0;
					break;
				}
			}
			if(isPrim == 1)
			{
				System.out.print(n+" ");
			}			
		}
*/
/*九九乘法表
		for(int i = 1;i < 10;i++)
		{
			for(int j = 1;j < 10;j++)
			{
				System.out.println("\t"+i+"*"+j+"="+(i*j));
			}
			System.out.println();
		}
*/
/*输出前50个素数
		int n = 2;
		int count = 0;
		while(count <= 50)
		{
			int isPrim = 1;
			for(int i = 2;i < n;i++)
			{
				if(n % i == 0)
				{
					isPrim = 0;
					break;
				}
			}
			if(isPrim == 1)
			{
				System.out.print(n+" ");
				count++;
			}
			
			n++;
		}
*/
/*关于标号的使用
		Scanner in = new Scanner(System.in);
		int amount = in.nextInt();
		OUT:
			for(int one = 0;one <= amount;++one)
			{
				for(int five = 0;five <= amount;++five)
				{
					for(int ten = 0;ten <= amount;++ten)
					{
						for(int twenty = 0;twenty <= amount;++twenty)
						{
							if(one + five*5 + ten*10 + twenty*20 == amount)
							{
								System.out.println(one+"张1元,"+five+"张5元，"+ten+"张10元，"+twenty+"张20元");
								break OUT;
							}
						}
					}
				}
			}
*/
/*求和
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		double sum = 0.0;
		for(int i = 1;i <= n;i++)
		{
			sum += 1.0/i;
		}
		System.out.printf("%.2f",sum);
*/
/*求和2
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		double number;
		double sum = 0.0;
		int sign = 1;
		for(int i = 1;i <= n;i++)
		{
//			number = sign * (1.0 / i);
//			sum += number;
//            sign = (-1) * sign;
            if(i%2 == 1)
            {
            	sum += 1.0/i;
            }
            else
            {
            	sum -= 1.0/i;
            }
			
		}
		System.out.println(sum);
		System.out.printf("%.2f",sum);
*/		
/*枚举法求最大公约数		
		Scanner in = new Scanner(System.in);
		System.out.println("请输入需要求最大公约数的两个数：");
		int a = in.nextInt();
		int b = in.nextInt();
		int gcd = 1;
		for(int i = 2;i <= a && i <= b;i++)
		{
			if(a%i == 0 && b%i == 0)
			{
				gcd = i;
			}
		}
		System.out.println(a+"和"+b+"的最大公约数是"+gcd);
*/		
/*辗转相除法求最大公约数
		Scanner in = new Scanner(System.in);
		System.out.println("请输入需要求最大公约数的两个数：");
		int a = in.nextInt();
		int b = in.nextInt();
		int oa = a;//为了便于最后输出a,b最初的值
		int ob = b;
		while(b != 0)
		{
			int r = a%b;
			System.out.println(a+","+b+","+r);
			a = b;
			b = r;
		}
		
		System.out.println(oa+"和"+ob+"的最大公约数是"+a);
*/	
/*求用户输入的所有的数据的平均数
		Scanner in = new Scanner(System.in);
		int x;
		double sum = 0;
		int cnt = 0;
		System.out.println("Please enter x:");
		x = in.nextInt();
		while(x != -1)
		{
			sum += x;
			cnt++;
			x = in.nextInt();
		}
		if(cnt > 0)
		{
			System.out.println(sum/cnt);
		}
*/
/*求用户输入的所有的数据的平均数并输出所有比平均数大的数据
		Scanner in = new Scanner(System.in);
		double sum = 0;
		int cnt = 0;
		System.out.println("Please enter cnt:");
		cnt = in.nextInt();
		if(cnt > 0)
		{
		    int[] numbers = new int[cnt];
		    for(int i = 0;i < numbers.length;i++)//具有可扩展性的代码
			
			{
				numbers[i] = in.nextInt();
				sum += numbers[i];
			}
				double average = sum/cnt;
				for(int i = 0; i < cnt;i++)
				{
					if(numbers[i] > average)
					{
						System.out.println(numbers[i]);
					}
				}
				System.out.println(sum/cnt);
			}
*/	
/*数组名的赋值
		Scanner in = new Scanner(System.in);
		int[] a = new int[10];
		a[0] = 5;
		int[] b = a;
		System.out.println(a[0]);
		b[0] = 16;
		System.out.println(b[0]);
		System.out.println(a[0]);
*/
/*数组名的赋值
		Scanner in = new Scanner(System.in);
		int[] a1 = {1,2,3,4,5};
		int[] a2 = a1;
		for(int i = 0;i < a2.length;i++)
		{
			a2[i]++;
		}
		for(int i = 0;i < a1.length;i++)
		{
			System.out.print(a1[i]+" ");
		}
*/
/*数组变量之间的比较	
		Scanner in = new Scanner(System.in);
		int[] a = {1,2,3,4,5};
		int[] b = {1,2,3,4,5};
		System.out.println(a==b);
*/
/*数组的复制和比较
		Scanner in = new Scanner(System.in);
		int[] a = {1,2,3,4,5};
		int[] b = new int[a.length];
		for(int i = 0;i < b.length;i++)
		{
			b[i]  = a[i];
		}
		boolean isEqu = true;
		for(int i = 0;i < b.length;i++)
		{
			if(a[i] != b[i])
			{
				isEqu = false;
				break;
			}
		}
		System.out.println(isEqu);
*/
/*投票统计
		Scanner in = new Scanner(System.in);
		int x;
		int[] numbers = new int[10];
		System.out.println("Please enter integer numbers between 0 and 9:");
		x = in.nextInt();
		while(x != -1)
		{
			if(x >= 0 && x <= 9)
				numbers[x]++;
			x = in.nextInt();
		}
		for(int i = 0;i < numbers.length;i++)
		{
			System.out.println(i+":"+numbers[i]);
		}
*/
/*线性搜索所输入的数据是否在已建立的数组中，for—each循环
		Scanner in = new Scanner(System.in);
		int[] data = {3,2,5,7,4,9,11,34,12,28};
		System.out.println("Please enter a integer number:");
		int x = in.nextInt();
		int loc = -1;
		boolean found = false;
		for(int i = 0;i < data.length;i++)
		{
			if(x == data[i])
			{
				loc = i;
				break;
			}
		}
		for(int k : data)
		{
			if(k == x)
			{
				found = true;
				break;
			}
		}
		if(loc > -1)
		{
			System.out.println(x+"是第"+(loc+1)+"个数");
		}
		else
		{
			System.out.println(x+"不在其中");
		}
*/
/*求素数，判断是否能被已知的且小于x的素数整除
		Scanner in = new Scanner(System.in);
		int[] primes = new int[50];
		primes[0] = 2;
		int cnt = 1;
		MAIN_LOOP:
		for(int x = 3;cnt < 50;x++)
		{
			for(int i = 0;i < cnt;i++)
			{
				if(x % primes[i] == 0)
				{
					continue MAIN_LOOP;
				}
			}
			primes[cnt++] = x;
		}
		for(int k : primes)
		{
			System.out.print(k+" ");
		}
*/
/*构造素数表
 * （1）令X为2
 * （2）将2X，3X，4X直至ax<n的数标记为非素数
 * （3）令X为下一个没有被标记为非素数的数，重复（2）；直至到所有的数都已尝试完毕
 */
/*
		Scanner in = new Scanner(System.in);
		boolean[] isPrime = new boolean[100];//100以内的素数
		for(int i = 0;i < isPrime.length;i++)
		{
			isPrime[i] = true;
		}
		for(int i = 2;i < isPrime.length;i++)
		{
			if(isPrime[i])
			{
				for(int k = 2;i*k < isPrime.length;k++)
				{
					isPrime[i*k] = false;
				}
			}
		}
		for(int i = 2;i < isPrime.length;i++)
		{
			if(isPrime[i])
			{
				System.out.print(i+" ");
			}
		}
*/
/*字符，大写转换为小写
		Scanner in = new Scanner(System.in);
		char c = 'A';
		char d = (char)(c + 'a' - 'A');
		System.out.println(d);
*/ 
/*包裹类型
	    Scanner in = new Scanner(System.in);
	    int i = 10;
	    Integer k = 10;
	    k = i;
	    System.out.println(Character.toLowerCase('A'));
*/		
/*Math类中的常用函数
		Scanner in = new Scanner(System.in);
		System.out.println(Math.abs(-12));
		System.out.println(Math.round(10.345));
		System.out.println(Math.random());
		System.out.println(Math.pow(2,3));
*/
/*字符串的连接
		Scanner in = new Scanner(System.in);
		String s = new String("Hello");
		System.out.println(s+" world");
		System.out.println(s+1+2);
*/
/*读入一行和一个单词
		Scanner in = new Scanner(System.in);
		String s;
		s = in.nextLine();
		System.out.println(s);
		String a;
		a = in.next();
		System.out.println(a);
*/
/*字符串相等
		Scanner in = new Scanner(System.in);
		String s;
		s = in.next();
		System.out.println(s.equals("bye"));
*/
/*字符串大小比较
		Scanner in = new Scanner(System.in);
		String s1 = "abc";
		String s2 = "abcd";
		System.out.println("abcd".compareTo(s2));
*/
/*求字符串的长度,访问字符串里的字符
		Scanner in = new Scanner(System.in);
		String name = "Hello",str1 = "one",str2 = "",str3;
		System.out.println(name.length()+";"+str1.length()+";"+str2.length());
        System.out.println(name.charAt(0));
        for(int i = 0;i < name.length();i++)
        {
        	System.out.println(name.charAt(i));
        }
*/	
/*得到子串,寻找字符
		Scanner in = new Scanner(System.in);
		String s1 = "0123A56389ab";
		System.out.println(s1.substring(2));
		System.out.println(s1.substring(2,4));
        System.out.println(s1.indexOf('3'));
        System.out.println(s1.indexOf("A56"));
        System.out.println(s1.lastIndexOf('a'));
*/
/*字符串的其他操作，字符串本身是不可修改的
		Scanner in = new Scanner(System.in);
		String s = "abcd";
		String s1 = s.toUpperCase();
		System.out.println(s1);
*/
/*素数求和，用定义函数的方法求出所输入的m和n之间的素数个数并求和
		Scanner in = new Scanner(System.in);
		System.out.println("Please enter n and m:");
		int m = in.nextInt();
		int n = in.nextInt();
		if(m == 1)
		{
			m = 2;
		}
		int cnt = 0;
		int sum = 0;
		for(int i = m;i <= n;i++)
		{
			if(isPrime(i))
			{
				cnt++;
				sum+=i;
			}
		}
		System.out.println("在"+m+"和"+n+"之间有"+cnt+"个素数，总和为"+sum);
*/
/*求和
		Scanner in = new Scanner(System.in);
		int a,b,sum;
		System.out.println("Please enter a and b:");
		a = in.nextInt();
		b = in.nextInt();
		sum = to_sum(a,b);
		System.out.println("和为"+sum);
*/
		
		
		
		
		
		
		
		}
		
	}


