/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    var val = init;
    return {
        increment: function() {
            return ++val;
        },
        reset: function() {
            return val=init;
        },
        decrement: function() {
            return --val;
        }
    };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */