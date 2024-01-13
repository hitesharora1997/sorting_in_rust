fn main() {
    let a = 10;
    let b = 7;

    let x = set_bit(a) + set_bit(b);
    println!("{}",x);
}

fn set_bit(mut x: i32) -> i32 {
    let mut c = 0;
    while x != 0 {
        c = c + (x & 1);
        // println!("{}",c);
        x = x >> 1;
    }
    c
}
