            /* it means that function x has to return a <promise> only but if it returns
            a <non-promise> then it will wrap it into a resolved promise with that value.
                                        */
async function x() {
    return 1;
}
x().then(()=> console.log('promise is returned by using async'));
