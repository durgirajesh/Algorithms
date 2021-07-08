import java.util.*;

public class Main
{
	public static void main(String[] args) {
		
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		
		int l=str.length();
		
		char[] ch=str.toCharArray();
		int count=0;
		
		for(int i=0;i<l;i++){
		    if(ch[i]==' ' && ch[i-1]!=' '){
		        count++;
		    }
		}
		System.out.println(count);
		int k=(count+1);
		String[] s=new String[k];
		int j=0;
		String sr=new String();
		
		for(int i=0;i<l;i++){
		    if(ch[i]==' ' && ch[i-1]!=' '){
		        //System.out.println(i);
		        s[j++]=sr;
		        sr=new String();
		    }else{
		        sr+=ch[i];
		        sr=sr.trim();
		        //System.out.println(sr);

		    }
		}
		s[k-1]=sr;
		
		for(int i=0;i<k;i++){
		    System.out.println(s[i]+"");
		}
	}
}
