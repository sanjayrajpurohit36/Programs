/**
 * What will be the output of the following code
 */

'use strict';

(function() { 
    var hack = "Hackerearth";
    var h = [].filter.call(hack, function(hack, i) {
        console.log("=>",hack)
        return i > 6;
    })
    console.log(h);
}());