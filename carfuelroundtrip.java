import java.util.*;

public class CarFuelRound

{

public static void main (String arg [])

{

Scanner sc=new Scanner(System.in);

System.out.println("Enter destination distance:");

int d=sc.nextInt();

System.out.println("Enter maximum distance a full tank can go: ");

int m=sc.nextInt();

System.out.println("Enter number of stops:");

int n=sc.nextInt();

int A[]=new int[n+2];

int i;

A[0]=0;

A[n+1]=d;

System.out.println("Enter distance of stops from origin: " );

for (i=1;i<=n;i++)

{

A[i]=sc.nextInt();

}

int minRefill =0;

int currRefill =0;

int lastRefill=0;

int flag =0;

while (currRefill <= n)

{

lastRefill = currRefill;

while(currRefill<=n && (A [currRefill+1] - A [lastRefill])<=m)

{

currRefill+=1;

}

if(currRefill==lastRefill)

{

System.out.println("IMPOSSIBLE");

flag=1;

break;

}

if(currRefill<=n)

{

minRefill+=1;

}

}

if(flag==0)

{

int saved=m-(A[currRefill]-A[lastRefill]);

System.out.println( " Minimum number of stops required:"+minRefill);

System.out.println("Fuel saved: "+saved);

if (saved >=(d - A [n]))

{

System.out.println("Round Trip Successful");

}

else

{

System.out.println("Round Trip Not Successful");

}

}

}

}
