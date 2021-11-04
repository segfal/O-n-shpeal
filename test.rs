

//O(1)
fn constant_time()
{
    n = 1;
}

// O(n)
fn linear_time(n: i32)
{
    for i in 0..n
    {
        println!("{}", i);
    }
}


// O(n^2)
fn quadratic_time(n: i32)
{
    for i in 0..n
    {
        for j in 0..n
        {
            println!("{}", i);
        }
    }
}

// O(log n)
fn logarithmic_time(n: i32)
{
    for i in 1..n
    {
        continue;
    }
}

fn code()
{
    // O(1)
    constant_time();

    // O(n)
    linear_time(10);

    // O(n^2)
    quadratic_time(10);

    // O(log n)
    logarithmic_time(10);
}

fn main()
{
    code();
}


