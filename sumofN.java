package com.basic;

import java.util.Scanner;

public class sumofN {
	public static void main(String[] args)
	{
		int i,n,sum=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter N :");
		n=sc.nextInt();
		for(i=0;i<n;i++)
		{
			sum=sum+i;
		}
		System.out.println("Sum :"+sum);
			
	}

}
