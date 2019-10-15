#include<stdio.h>

int main()
{    int b1=0,b2=0,a1=0,a2=0;
     int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0;
    int n,k,r,c;
    scanf("%d%d%d%d",&n,&k,&r,&c);
    
    int R,C;
 
   int attack=0;
   attack=attack+2*(n-1);
 
  
 int right_up, right_down, left_up, left_down;
 
 
     int right_up1;
 
    right_up1=r;
 if(c>r)
     right_up1=c;
    right_up=n-right_up1;
 
 
    right_down=r-1;
   if( (r-1)>(n-c) )
       right_down=n-c;
 
   left_up=n-r;
   if( (n-r)> (c-1) )
       left_up=c-1;
 
    int left_down1;
 
    left_down1=r;
 if(r>c)
     left_down1=c;
  
 left_down=left_down1-1;
 
 attack=attack+right_up+ right_down+ left_up+ left_down;
 
   //printf("%d\n",attack);
 
 
    int reach=0;
  int obstacle=0;
 int row_left=-1, row_right=-1,colum_up=-1,colum_down=-1,colum_right=-1,colum_left=-1,row_down=-1,row_up=-1;
 int row_left_up=-1,colum_left_up=-1,row_left_down=-1, colum_left_down=-1, row_right_up=-1, colum_right_up=-1,row_right_down=-1, colum_right_down=-1; 
 while(k--){
     
     scanf("%d%d",&R,&C);
     
     
     if(r==R)
     {
         if(C<c)
         {
             int temp1;
             temp1=C;
             if(temp1>row_left)
             {
            row_left= R; 
                 colum_left=C;
             }
             
         }
         
         else 
         {   
              int temp2;
             temp2=C;
             if(temp2<row_right||row_right==-1 )
             { row_right=R;
               colum_right=C;
             }
             
         }
         
     }
     
     if(c==C)
     {
         if(R>r)
         {   int temp3;
          temp3=R;
          if(temp3<row_up|| row_up==-1)
          {colum_up=C; 
           row_up=R;
          }
             
         }
         
         else
         {   int temp4;
            temp4=R;
            if(temp4>row_down || row_down==-1)
            { colum_down=C;
             row_down=R;
             
            }
             
         }
         
         
         
     }
     //first condition
     
     if( (row_left_up==-1 || (row_left_up>R  && C>colum_left_up))   &&  R-r == c-C && C<c &&R>r  )
     
     {
         
         row_left_up=R;
         
         colum_left_up=C;
         
         
     }
     
     //second condition
     if( (row_left_down==-1 || (row_left_down<R && colum_left_down <C ) ) && r-R == c-C && C<c &&R<r   )
     
     {
         
         row_left_down=R;
         
         colum_left_down=C;
         
     }
     //third condition
     
     if( (row_right_up==-1 || (row_right_up>R && colum_right_up >C ) )  && R-r ==C-c && C>c && R >r   )
     {
         
         row_right_up=R;
         colum_right_up=C;
         
         
         
     }
     //fourth condition
     
     if( (row_right_down==-1 ||( row_right_down<R && colum_right_down>C) ) && r-R==C-c && C>c && R<r   )
     {
         row_right_down=R;
         colum_right_down=C;
         
         
     }
     
 }
     //end of diagonal condition
     //R B L T
     reach+= ( colum_right!=-1 ) ? ( colum_right-c-1 ) : n-c;
     reach+= (row_down!=-1) ? ( r-row_down-1 ) : r-1;
     reach+= ( colum_left!=-1 ) ? ( c-colum_left-1 ) :c-1;
     reach+= ( row_up!=-1) ? ( row_up-r-1): n-r;
     
     //BR BL TL TR
     int br;
     br=n-c;
     if(br> (r-1))
         br=r-1;
     
     reach+= ( colum_right_down!=-1 ) ? (colum_right_down-c-1 ) :br;
     
     int bl;
     bl=c-1;
     if(bl> (r-1) )
         bl=r-1;
     
     reach+=( row_left_down!=-1 ) ? (c-colum_left_down-1) :bl;
     
     int tl;
     tl=c-1;
     if(tl> (n-r)) 
         tl=n-r;
     
     reach+= ( colum_left_up!=-1 ) ? (c- colum_left_up-1 ):tl;
     
     int tr;
     tr=n-c;
     if(tr> (n-r ))
         tr=n-r;
     
     reach+= (row_right_up!=-1) ? (colum_right_up-c-1) :tr;
     
     
     
     printf("%d",reach);
 
 
 
 
 
 
 
 
 
 
 
 
 
  /*  while(k--)
    {
        scanf("%d%d",&R,&C);
        //conditionfor colums
        if(r==R )
        {
            if(C<c)
            {  
                if(C>b1)
                b1=C;
             
            }
            else
            {   int temp;
             temp=n-C+1;
                 
                if(temp>=b2)
                b2=n-C+1;  
                
                
            }
        }
        //condition for obstacles of rows
        if(c==C)
        {
           if(R<r)
           {
               if(R>a1)
                   a1=R;
           } 
               
         else
               {
                   int temp1;
                   temp1=n-R+1;
                   
                   if(temp1>=a2)
                       a2=n-R+1;
                   
                   
                   
               }   
               
             
        }
        
        
        
        //first up up diagonal
        //condition for diagonal
        
        int r1=r,c1=c;
        while(r1<=n ||c1<=n)
        {
            if(r1==R &&c1==C )
            {
                if( (n-r1)>(n-c1) )
                {
                    int temp2;
                    temp2=n-c1+1;
                    if(temp2>d1)
                    d1=n-c1+1;
                    
                }
              else
              {
                  int temp3;
                    temp3=n-r1+1;
                    if(temp3>d2)
                    d2=n-r1+1;
                  
                  
              } 
                
                
            }
            
            
            
            r1++;
            c1++;
        }
        
        //second conditon
        
         int r2=r,c2=c;
        while(r2>=1 ||c2>=1)
        {
            if(r2==R &&c2==C )
            {
                if( (r2)>(c2) )
                {
                    int temp4;
                    temp4=c2;
                    if(temp4>d3)
                    d3=c2;
                    
                }
              else
              {
                  int temp5;
                    temp5=r2;
                    if(temp5>d4)
                    d4=r2;
                  
                  
              } 
                
                
            }
            
            
            
            r2--;
            c2--;
        }
        
        //end of second condition
       //third condition 
        
        
         
         int r3=r,c3=c;
        while(r3>=1 ||c3<=n)
        {
            if(r3==R &&c3==C )
            {
                if( (r3)>(n-c3+1) )
                {
                    int temp6;
                    temp6=n-c3+1; 
                    if(temp6>d5)
                    d5=n-c3+1;
                    
                }
              else
              {
                  int temp7;
                    temp7=r3;
                    if(temp7>d6)
                    d6=r3;
                  
                  
              } 
                
                
            }
            
            
            
            r3--;
            c3++;
        }
        //end of third condition
        
        
        
          
         int r4=r,c4=c;
        while(r4<=n ||c4>=1)
        {
            if(r4==R &&c4==C )
            {
                if( (c4)>(n-r4+1) )
                {
                    int temp8;
                    temp8=n-r4+1;
                    if(temp8>d7)
                    d7=n-r4+1;
                    
                }
              else
              {
                  int temp9;
                    temp9=c4;
                    if(temp9>d8)
                    d8=c4;
                  
                  
              } 
                
                
            }
            
            
            
            r4++;
            c4--;
        }
        //end forth diagonal condition
        
        //a1,a2,b1,b2,d1-d8
        
        
        obstacle=a1+a2+b1+b2+d1+d2+d3+d4+d5+d6+d7+d8;
        
        
        
        
    }*/
    
    
   // printf("\nNo of attack - obstacle\n");
  // printf("d5=%d d6=%d d7=%d d8=%d\n",d5,d6,d7,d8);
  // printf("%d\n",obstacle);
    //printf("%d", attack-obstacle);
    
    
    
    
}
