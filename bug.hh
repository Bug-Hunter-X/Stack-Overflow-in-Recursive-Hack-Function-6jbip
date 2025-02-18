function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main(): void {
  echo foo(5);
}
This code will result in a stack overflow error for sufficiently large inputs due to excessive recursive calls.  The Hack compiler may not readily point to this as a specific error, making it an uncommon bug.