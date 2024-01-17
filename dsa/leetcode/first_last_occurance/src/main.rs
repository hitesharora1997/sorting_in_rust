fn main() {
    let a = [1, 2, 4, 5, 6, 7, 4, 3, 3, 7];
    println!("Last occurrence: {}", find_occurance(&a, 3, true));
    println!("First occurrence: {}", find_occurance(&a, 3, false));
}

fn find_occurance(x: &[i32], target: i32, find_last: bool) -> i32 {
    let mut start = 0;
    let mut end = x.len() as i32 - 1;
    let mut result = -1;

    while start <= end {
        let mid = start + (end - start) / 2;
        if x[mid as usize] == target {
            result = mid;
            if find_last {
                start = mid + 1; // Continue search on right for last occurrence
            } else {
                end = mid - 1; // Continue search on left for first occurrence
            }
        } else if x[mid as usize] < target {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    result
}
