#  include  <iostream> 
using namespace std;


int main()
{
   
       
       int  i,  j,  r  =  0,  c  =  0;
       int  a [ 10 ][ 10 ];
       

      
       cout  <<  "  Enter Number Of Rows & Columns  Matrix  :  ";
       cin  >>  r  >>  c ;
       
      
       cout  <<  "  Enter  "  <<  r  *  c  <<  "  Values for 2D Array  :  ";
       for  (  i  =  0;  i  <  r;  i++  )
       {
                for  (  j  =  0;  j  <  c;  j++  )
                {
                         cin  >>  a [ i ][ j ];
                }
       }

      
       cout  <<  "  Values Of Matrix  :  ";
       for  (  i  =  0;  i  <  r;  i++  )
       {
                cout  <<  " \n ";
                for  (  j  =  0;  j  <  c;  j++  )
                {
                         cout  <<  a [ i ][ j ];
                }
       }

int sum=0;
if(r==c)
{
   for(i=0; i<r; i++)
   {
      for(j=0; j<c; j++)
      {
         if(i+j==0 || i+j==2 || i+j==4)
         {
            sum=sum+a[i][j];
         }
      }
   }
  
   cout<<"\n Sum Of Diagonal Elements Of matrix Is : "<<sum<<endl;
}
else
{
   cout<<" \n Addition Is Not Possible";
}

}
