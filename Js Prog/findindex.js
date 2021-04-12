        /*  filter()
           This function returns the array of all those elememts which satisfy
           a particular cond.
        */

       var ary  = [2,4,6,8,1];
       function check(no) {
           return no > 2;
       }
       var res = ary.findIndex(check);
       console.log(res); // 4