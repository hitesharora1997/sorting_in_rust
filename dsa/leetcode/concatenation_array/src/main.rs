// https://leetcode.com/problems/concatenation-of-array/

fn main() {
    let v = vec![1, 2, 1];

    let j = v.clone();

    let z = [v, j].concat();

    println!("{:?}", z);
}
