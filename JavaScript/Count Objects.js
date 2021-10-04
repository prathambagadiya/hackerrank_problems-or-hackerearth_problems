

/*
 * Return a count of the total number of objects 'o' satisfying o.x == o.y.
 * 
 * Parameter(s):
 * objects: an array of objects with integer properties 'x' and 'y'
 */
function getCount(objects) {
    let c1=0;
    for(let p in objects)
    {
        if(objects[p].x==objects[p].y)
        c1++;
    }
    return c1;
}

