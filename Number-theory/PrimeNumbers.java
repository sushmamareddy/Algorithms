
public class PrimeNumbers {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int N=20;
		//0,0, 1, 1,  0,  1, 0, 1, 0, 0, 0
		//0,1, 2, 3 , 4 , 5, 6, 7, 8, 9, 10
		int arr[]= new int[N+1];
		
		arr[0] = 0;
		arr[1] = 0;
		//N
		for(int i=2;i<=N;i++)
		{
			arr[i] = 1;
		}
		//sqrt(N)
		for(int i=2;i*i<=N;i++)
		{
			if(arr[i]==1)
			{
				for(int j = i*i;j<=N;j=j+i) 
				{
					arr[j] = 0;
				}
			}
		}
		for(int i=0;i<=N;i++)
		{
			if(arr[i]==1)
			{
				System.out.println(i);
			}
		}
		
	}

}
