fn main() {
   let x = 13;
   println!("{}",if_prime(x));
}

fn if_prime(i: i32) -> bool {
   for j in 2..i {
      // println!("{}",j);
      if i % j == 0 {
         return false;
      }
   }
   true
}