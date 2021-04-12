                    /* It waits for only first promise to get resolved / reject
                       and goes forward with its result. 
                    */
Promise.race([
  new Promise((resolve, reject) => setTimeout(() => resolve(1), 0)), // 1
  new Promise((resolve, reject) => setTimeout(() => resolve(2), 2000)), // 2
  new Promise((resolve, reject) => setTimeout(() => resolve(3), 1000))  // 3
]).then((res) =>console.log(res));