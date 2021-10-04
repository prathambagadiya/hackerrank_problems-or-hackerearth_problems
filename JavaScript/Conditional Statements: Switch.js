

function getLetter(s) {
    let letter;
    // Write your code here
    let idx= s.search("[a,r,i,o,u]");
    let idx1= s.search("[b,c,d,f,g]");
    let idx2= s.search("[h,j,k,l,m]");
    let idx3= s.search("[n,p,q,r,s,t,v,w,x,y,z]");
    if(idx==0)
    letter="A";
    if(idx1==0)
    letter="B";
    if(idx2==0)
    letter="C";
    if(idx3==0)
    letter="D";
   

    return letter;
}

