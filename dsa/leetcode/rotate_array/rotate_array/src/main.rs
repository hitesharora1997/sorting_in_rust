fn main() {
    let j = [2, 3, 1, 22, 91];
    // let max = 0;
    for i in 0..j.len() - 1 {
        if j[i] < j[i + 1] {
            let max = j[i + 1];
            println!("{}", max);
        }
    }
}
// max =  0
// max =
