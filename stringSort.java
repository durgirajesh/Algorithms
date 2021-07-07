import java.util.*;

public class Main
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		
		int n=sc.nextInt();
		String[] st=new String[n];
		
		for(int i=0;i<n;i++){
		    
		    st[i]=sc.next();
		}
		
		int[] count=new int[n];
		
		for(int i=0;i<n;i++){
		    
		    count[i]=st[i].length();
		}
		
		for(int i=0;i<n-1;i++)
		{
		    for(int j=0;j<n-i-1;j++)
		    {
		        if(count[j]>count[j+1])
		        {
		            String tmp=st[j];
		            st[j]=st[j+1];
		            st[j+1]=tmp;
		        }
		    }
		}
		
		for(int i=0;i<n;i++){
		    System.out.println(st[i]);
		}

	}
}
