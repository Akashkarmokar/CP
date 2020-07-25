#define Max 10000007

int prime[Max];


void sieve()

{
    
	prime[0] = 1 ;

        prime[1] = 1 ;
    
	for(int i = 4 ;i<Max;i+=2)
    
	{
        
		prime[i] = 1 ;
    
	}
    
	int root = sqrt(Max);
    
	for(int i = 3 ;i<root;i+=2)
    
	{
        
		if(prime[i]==0)
        
		{
            
			for(int j = i*i ;j<Max;j+=i)
            
			{
                
				prime[j] =  1 ;
            
			}
        
		}
    
	}

}
