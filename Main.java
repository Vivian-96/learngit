package hello;

import java.util.Scanner;

import javax.sound.midi.SysexMessage;
import javax.xml.validation.SchemaFactoryConfigurationError;

public class Main {
	
/*���������������֮������ĺ�
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
/*Ϊ�ж�����������ĺ���
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
/*������Ϸ
        Scanner in = new Scanner(System.in);
        int number = (int)(Math.random()*100+1);//[0,1)-->[1,100)-->[0,100]ϵͳ�������������[0,1)
        int a;
        int count = 0;
        do
        {
        	a = in.nextInt();
        	count = count + 1;
        	if(a > number)
        	{
        		System.out.println("ƫ��");
        	}
        	else if(a < number)
        	{
        		System.out.println("ƫС");
        	}
        }while(a != number);
        System.out.println("��ϲ��¶��ˣ������"+count+"�Ρ�");
*/
/*������������λ��
		Scanner in = new Scanner(System.in);
		int number;
		System.out.println("������һ��������");
		number = in.nextInt();
		int count = 0;
		do
		{
			count = count + 1;
			number = number / 10;
		}while(number > 0);
		System.out.println("����"+count+"λ����");
*/
/*�����ֽ⡢�������
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
/*��׳�
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
/*�ж�����
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int isPrim = 1;
		for(int i = 2;i < n;i++)
		{
			if(n % i == 0)
			{
				isPrim = 0;
				System.out.println(n+"��������");
				break;
			}
		}
		if(isPrim == 1)
		{
			System.out.println(n+"������");
		}
		else
		{
			System.out.println(n+"��������");
		}
*/
/*���100���ڵ�����
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
/*�žų˷���
		for(int i = 1;i < 10;i++)
		{
			for(int j = 1;j < 10;j++)
			{
				System.out.println("\t"+i+"*"+j+"="+(i*j));
			}
			System.out.println();
		}
*/
/*���ǰ50������
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
/*���ڱ�ŵ�ʹ��
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
								System.out.println(one+"��1Ԫ,"+five+"��5Ԫ��"+ten+"��10Ԫ��"+twenty+"��20Ԫ");
								break OUT;
							}
						}
					}
				}
			}
*/
/*���
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		double sum = 0.0;
		for(int i = 1;i <= n;i++)
		{
			sum += 1.0/i;
		}
		System.out.printf("%.2f",sum);
*/
/*���2
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
/*ö�ٷ������Լ��		
		Scanner in = new Scanner(System.in);
		System.out.println("��������Ҫ�����Լ������������");
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
		System.out.println(a+"��"+b+"�����Լ����"+gcd);
*/		
/*շת����������Լ��
		Scanner in = new Scanner(System.in);
		System.out.println("��������Ҫ�����Լ������������");
		int a = in.nextInt();
		int b = in.nextInt();
		int oa = a;//Ϊ�˱���������a,b�����ֵ
		int ob = b;
		while(b != 0)
		{
			int r = a%b;
			System.out.println(a+","+b+","+r);
			a = b;
			b = r;
		}
		
		System.out.println(oa+"��"+ob+"�����Լ����"+a);
*/	
/*���û���������е����ݵ�ƽ����
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
/*���û���������е����ݵ�ƽ������������б�ƽ�����������
		Scanner in = new Scanner(System.in);
		double sum = 0;
		int cnt = 0;
		System.out.println("Please enter cnt:");
		cnt = in.nextInt();
		if(cnt > 0)
		{
		    int[] numbers = new int[cnt];
		    for(int i = 0;i < numbers.length;i++)//���п���չ�ԵĴ���
			
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
/*�������ĸ�ֵ
		Scanner in = new Scanner(System.in);
		int[] a = new int[10];
		a[0] = 5;
		int[] b = a;
		System.out.println(a[0]);
		b[0] = 16;
		System.out.println(b[0]);
		System.out.println(a[0]);
*/
/*�������ĸ�ֵ
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
/*�������֮��ıȽ�	
		Scanner in = new Scanner(System.in);
		int[] a = {1,2,3,4,5};
		int[] b = {1,2,3,4,5};
		System.out.println(a==b);
*/
/*����ĸ��ƺͱȽ�
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
/*ͶƱͳ��
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
/*��������������������Ƿ����ѽ����������У�for��eachѭ��
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
			System.out.println(x+"�ǵ�"+(loc+1)+"����");
		}
		else
		{
			System.out.println(x+"��������");
		}
*/
/*���������ж��Ƿ��ܱ���֪����С��x����������
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
/*����������
 * ��1����XΪ2
 * ��2����2X��3X��4Xֱ��ax<n�������Ϊ������
 * ��3����XΪ��һ��û�б����Ϊ�������������ظ���2����ֱ�������е������ѳ������
 */
/*
		Scanner in = new Scanner(System.in);
		boolean[] isPrime = new boolean[100];//100���ڵ�����
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
/*�ַ�����дת��ΪСд
		Scanner in = new Scanner(System.in);
		char c = 'A';
		char d = (char)(c + 'a' - 'A');
		System.out.println(d);
*/ 
/*��������
	    Scanner in = new Scanner(System.in);
	    int i = 10;
	    Integer k = 10;
	    k = i;
	    System.out.println(Character.toLowerCase('A'));
*/		
/*Math���еĳ��ú���
		Scanner in = new Scanner(System.in);
		System.out.println(Math.abs(-12));
		System.out.println(Math.round(10.345));
		System.out.println(Math.random());
		System.out.println(Math.pow(2,3));
*/
/*�ַ���������
		Scanner in = new Scanner(System.in);
		String s = new String("Hello");
		System.out.println(s+" world");
		System.out.println(s+1+2);
*/
/*����һ�к�һ������
		Scanner in = new Scanner(System.in);
		String s;
		s = in.nextLine();
		System.out.println(s);
		String a;
		a = in.next();
		System.out.println(a);
*/
/*�ַ������
		Scanner in = new Scanner(System.in);
		String s;
		s = in.next();
		System.out.println(s.equals("bye"));
*/
/*�ַ�����С�Ƚ�
		Scanner in = new Scanner(System.in);
		String s1 = "abc";
		String s2 = "abcd";
		System.out.println("abcd".compareTo(s2));
*/
/*���ַ����ĳ���,�����ַ�������ַ�
		Scanner in = new Scanner(System.in);
		String name = "Hello",str1 = "one",str2 = "",str3;
		System.out.println(name.length()+";"+str1.length()+";"+str2.length());
        System.out.println(name.charAt(0));
        for(int i = 0;i < name.length();i++)
        {
        	System.out.println(name.charAt(i));
        }
*/	
/*�õ��Ӵ�,Ѱ���ַ�
		Scanner in = new Scanner(System.in);
		String s1 = "0123A56389ab";
		System.out.println(s1.substring(2));
		System.out.println(s1.substring(2,4));
        System.out.println(s1.indexOf('3'));
        System.out.println(s1.indexOf("A56"));
        System.out.println(s1.lastIndexOf('a'));
*/
/*�ַ����������������ַ��������ǲ����޸ĵ�
		Scanner in = new Scanner(System.in);
		String s = "abcd";
		String s1 = s.toUpperCase();
		System.out.println(s1);
*/
/*������ͣ��ö��庯���ķ�������������m��n֮����������������
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
		System.out.println("��"+m+"��"+n+"֮����"+cnt+"���������ܺ�Ϊ"+sum);
*/
/*���
		Scanner in = new Scanner(System.in);
		int a,b,sum;
		System.out.println("Please enter a and b:");
		a = in.nextInt();
		b = in.nextInt();
		sum = to_sum(a,b);
		System.out.println("��Ϊ"+sum);
*/
		
		
		
		
		
		
		
		}
		
	}


