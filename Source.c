int a,b,add,sub,mul,add1,add2,sub1,sub2,mul1,mul2;
int addition(int a, int b)
{
  return (a+b);
}

int subtraction(int a, int b)
{
    if(a>b)
    return (a-b);
	else
	return (b-a);
}
int multiplication(int a, int b)
{
   if( a != 0 && b != 0)
   return (a*b);
   else
   return (1);
}

main()
{
   add = addition(add1 , add2);
   sub = subtraction(sub1, sub2);
   mul = multiplication(mul1, mul2);
}   
 
   
	
 	