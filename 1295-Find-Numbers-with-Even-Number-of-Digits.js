var findNumbers = function(nums) {
    let count = 0;

    for (let i = 0; i < nums.length; i++) {
        let cnt = 0;
        let num = nums[i];

        while (num > 0) {
            num = Math.floor(num / 10);
            cnt++;
        }

        if (cnt % 2 == 0) {
            count++;
        }
    }

    return count;
};