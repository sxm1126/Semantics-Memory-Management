fn main() {
    let v = vec![1, 2, 3];
    let sum = sum_slice(&v);     // borrow immutably
    println!("sum = {}", sum);   // v still valid; no leaks
}

fn sum_slice(s: &[i32]) -> i32 {
    s.iter().sum()
}
