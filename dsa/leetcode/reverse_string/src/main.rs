fn main() {
    let x = "abcd";
    rev(x, x.len() - 1);
}

fn rev(x: &str, j: usize) {
    if j == 0 {
        println!("{:?}", x.chars().nth(j).unwrap());
        return;
    }

    print!("{:?}", x.chars().nth(j).unwrap());
    rev(x, j - 1);
}
