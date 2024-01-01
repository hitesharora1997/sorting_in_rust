fn bubble_sort(r_vec: &mut Vec<i32>) -> Vec<i32> {
    for _ in 0..r_vec.len() {
        for j in 0..r_vec.len() - 1 {
            if r_vec[j] > r_vec[j + 1] {
                r_vec.swap(j, j + 1);
            }
        }
    }
    r_vec.to_vec()
}

fn main() {
    let mut x = vec![1, 6, 9, 14, 3, 2, 97, 12, 67];
    println!("{:?}", bubble_sort(&mut x));
}

#[cfg(test)]
mod test {
    use super::*;

    #[test]
    fn check_bubble_sort() {
        let mut l = [1, 9, 2, 5, 3].to_vec();
        assert_eq!(bubble_sort(&mut l), [1, 2, 3, 5, 9]);
    }
}
