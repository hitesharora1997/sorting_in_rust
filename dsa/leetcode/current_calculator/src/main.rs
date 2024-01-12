use std::io;

fn main() {
    println!("Enter the total amount:");
    let mut l = String::new();
    io::stdin().read_line(&mut l).expect("Failed to read line");
    let l: i32 = match l.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please enter a valid number.");
            return;
        }
    };

    let denominations = [100, 50, 20, 10, 5, 1]; // array of available denominations
    let mut total_cost = 0;
    let mut amount = l;

    for &i in denominations.iter() {
        let count = amount / i;
        if count > 0 {
            total_cost = total_cost + count;
            amount = amount - (count * i);
        }
        println!("{}", total_cost);
    }

    println!("Total notes needed: {}", total_cost);
}
