

fn main() {
    let n = 8;
    let r = 5;
    println!("{}",ncr(n , r));
}

fn factorial(n: i32) -> i32 {
    if n == 0 {
        return  1;
    }

    let mut fact = 1;
    for i in 1..=n {
        fact *= i
    }
    fact
}
fn ncr(n: i32, r: i32) -> i32 {
    let numerator = factorial(n);
    // println!("{}",numerator);

    let denominator = factorial(r) * factorial(n - r);

    let z = numerator / denominator;

    z

}