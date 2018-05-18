int Summary(int sum,int endpoint)
{
	int add;
	for(add=0;add<endpoint;add++) //一加到九十九
	{
		sum=sum+add;
	}
	return sum;
}
