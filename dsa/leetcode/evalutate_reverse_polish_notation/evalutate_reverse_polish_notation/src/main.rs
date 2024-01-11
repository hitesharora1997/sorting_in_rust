fn main() {
    let x = -123;
    let mut a = 0;
    let mut z = x.clone();
    while z != 0 {
        let d = z % 10;
        if (a > i32::MAX / 10) || (a < i32::MIN / 10) {
            return;
        }
        a = (a * 10) + d;
        z /= 10;
    }

    println!("{}", a);
}
