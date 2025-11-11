// Js in-genral is a Synchronus and Single-threaded language.
// Synchronus means code executes line by line, in the order it appears. 
// Each operation must complete before the next one starts.
// Single-threaded means Js runs on a single thread, meaning it can only do one task at a time. There’s no parallel execution of code.
// 
// JavaScript is synchronous and single-threaded by default, but it uses asynchronous mechanisms (like the event loop, callbacks, 
// promises, and async/await) to handle non-blocking operations efficiently. 
// This allows it to perform tasks like fetching data or timers without freezing the UI.
// 
// 
// Blocking code Vs Non-blocking code
// 
// Blocking code stops the execution of the program until the current operation (e.g., reading a file, making a network request) is completed.
// Non-blocking code allows the program to continue executing other tasks while waiting for an operation to complete.
// 
// Use blocking code for simple scripts or when operations are fast and sequential.
// Use non-blocking code for applications requiring high performance, scalability, or responsiveness (e.g., web servers, APIs, real-time apps).
// 
// non-bloacking code is not always usefull, like for dbms it is bad
