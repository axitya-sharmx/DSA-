var checkIfInstanceOf = function (obj, classFunction) {
    if (obj === null || obj === undefined || typeof classFunction !== "function") {
        return false;
    }

    let current = Object(obj);

    while (current !== null) {
        current = Object.getPrototypeOf(current);

        if (current === classFunction.prototype) {
            return true;
        }
    }

    return false;
};
