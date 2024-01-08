use std::collections::HashMap;

fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let mut map = HashMap::new();

    for (i, num) in nums.into_iter().enumerate() {
        if let Some(&index) = map.get(&(target - num)) {
            return vec![index as i32, i as i32];
        }
        map.insert(num, i);
        println!("{:?}", map);
    }
    vec![]
}

fn main() {
    let nums = vec![2, 7, 11, 15]; // Example input
    let target = 9; // Example target

    let result = two_sum(nums, target);

    for i in result {
        println!("{}", i);
    }
}
