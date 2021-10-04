

/*
 * Determine the original side lengths and return an array:
 * - The first element is the length of the shorter side
 * - The second element is the length of the longer side
 * 
 * Parameter(s):
 * literals: The tagged template literal's array of strings.
 * expressions: The tagged template literal's array of expression values (i.e., [area, perimeter]).
 */
function sides(literals, ...expressions) {
       var A= expressions[0];
       let P = expressions[1];
       
       let s1 = (P+ Math.sqrt(P**2-16*A))/4;
       let s2 = (P-Math.sqrt(P**2-16*A))/4;

       let arr = new Array(2);
       arr[0]=s1;
       arr[1]=s2;
       arr.sort();


  return arr;

}

