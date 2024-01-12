// https://leetcode.com/problems/power-of-two/

fn main() {
    let mut ans: i32 = 1;
    let n = 64;
    for _ in 0..=30 {
        println!("c {}", ans);
        if ans == n {
            println!("{}", true);
        }
        if ans < i32::MAX / 2 {
            ans = ans * 2;
        }
    }
    println!("{}", false);
}
