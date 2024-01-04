fn main() {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("Error");
    let n = input.trim().parse::<i32>().expect("Invalide input");

    let mut i = 1;
    let mut sum = 0;

    while i <= n {
        if i % 2 == 0 {
            sum += i;
        }
        i += 1;
    }
    println!("{}", sum);
}
