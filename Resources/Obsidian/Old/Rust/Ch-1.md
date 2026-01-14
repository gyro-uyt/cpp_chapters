
# *Installation*
### Installing `rustup` on Linux
If you’re using Linux or macOS, open a terminal and enter the following command:
```console
$ curl --proto '=https' --tlsv1.2 https://sh.rustup.rs -sSf | sh
```
If you get linker errors, you should install a C compiler.

### Installing `rustup` on Windows
On Windows, go to https://www.rust-lang.org/tools/install

### Troubleshooting
To check whether you have Rust installed correctly, open a shell and enter this line:
```console
$ rustc --version
```
Once Rust is installed via `rustup`, updating to a newly released version is easy. From your shell, run the following update script:
```console
$ rustup update
```
To uninstall Rust and `rustup`, run the following uninstall script from your shell:
```console
$ rustup self uninstall
```

# *Hello, World!*
### Basics
The installation of Rust also includes a local copy of the doc. so that you can read it offline. 
Run `$ rustup doc`

Rust files always end with the _.rs_ extension.
The convention is to use an underscore to separate them. For example, use _hello_world.rs_ rather than _helloworld.rs_.

### Writing and Running a Rust Program
Boilerplate code
```rust
fn main() {
    println!("Hello, world!");
}
```
To compile and run the file:
```console
$ rustc main.rs
$ ./main
Hello, world!
```
On Windows, enter the command `.\main` instead of `./main`

### Anatomy of a Rust Program
The `main` function is special: it is always the first code that runs in every executable Rust program.
The body of the `main` function holds the following code:
```rust
println!("Hello, world!");
```
This line does all the work in this little program: it prints text to the screen. There are three important details to notice here.
1. First, `println!` calls a Rust macro. If it had called a function instead, it would be entered as `println` (without the `!`). Rust macros are a way to write code that generates code to extend Rust syntax. Using a `!` means that you’re calling a macro instead of a normal function and that macros don’t always follow the same rules as functions.
2. You see the `"Hello, world!"` string. We pass this string as an argument to `println!`, and the string is printed to the screen.
3. We end the line with a semicolon (`;`)

### Compiling and Running
Compile it using the Rust compiler by entering the `rustc` command and passing it the name of your source file, like this:
```console
$ rustc main.rs
```

On Linux and macOS, you’ll see two files. On Windows, you’ll see three files:
1. source code file with the _.rs_ extension.
2. executable file (_main.exe_ on Windows, but _main_ on all other platforms)
3. when using Windows, a file containing debugging information with the _.pdb_ extension.

You run the _main_ or _main.exe_ file, like this:
```console
$ ./main # or .\main on Windows
```

Rust is an _ahead-of-time compiled_ language, meaning you can compile a program and give the executable to someone else, and they can run it even without having Rust installed.
If you give someone dynamic language files like _.rb_, _.py_, or _.js_ file, they need to have a Ruby, Python, or JavaScript implementation installed (respectively).

Just compiling with `rustc` is fine for simple programs, but as your project grows, you’ll want to manage all the options and make it easy to share your code. Next, we’ll introduce you to the Cargo tool, which will help you write real-world Rust programs.

# *Hello, Cargo!*

Cargo is Rust’s build system and package manager.
Most Rustaceans use this tool to manage their Rust projects because Cargo handles a lot of tasks for you, such as building your code, downloading the libraries your code depends on, and building those libraries. (We call the libraries that your code needs _dependencies_.)

Check whether Cargo is installed by entering the following in your terminal:
```console
$ cargo --version
```

### Creating a Project with Cargo

On any operating system, run the following:
```console
$ cargo new hello_cargo
$ cd hello_cargo
```

The first command creates a new directory and project called _hello_cargo_.
You’ll see that Cargo has generated two files and one directory for us: a _Cargo.toml_ file and a _src_ directory with a _main.rs_ file inside.

Open _Cargo.toml_ in your text editor of choice, Filename: Cargo.toml
```toml
[package]
name = "hello_cargo"
version = "0.1.0"
edition = "2024"

[dependencies]
```

This file is in the [_TOML_](https://toml.io) (_Tom’s Obvious, Minimal Language_) format, which is Cargo’s configuration format.
1. The first line, `[package]`, is a section heading that indicates that the following statements are configuring a package. As we add more information to this file, we’ll add other sections.
2. The next three lines set the configuration information Cargo needs to compile your program: the name, the version, and the edition of Rust to use. We’ll talk about the `edition` key in [Appendix E](https://doc.rust-lang.org/book/appendix-05-editions.html).
3. The last line, `[dependencies]`, is the start of a section for you to list any of your project’s dependencies. In Rust, packages of code are referred to as _crates_.

Now open _src/main.rs_ and take a look, Cargo has generated a “Hello, world!” program
Cargo placed the code in the _src_ directory and we have a _Cargo.toml_ configuration file in the top directory.
Cargo expects your source files to live inside the _src_ directory. The top-level project directory is just for README files, license information, configuration files, and anything else not related to your code. Using Cargo helps you organize your projects.

### Building and Running a Cargo Project

From your _hello_cargo_ directory, build your project by entering the following command:
```console
$ cargo build
```
This command creates an executable file in _target/debug/hello_cargo_
Because the default build is a debug build, You can run the executable with this command:

```console
$ ./target/debug/hello_cargo # or .\target\debug\hello_cargo.exe on Windows
Hello, world!
```

If all goes well, `Hello, world!` should print to the terminal. Running `cargo build` for the first time also causes Cargo to create a new file at the top level: _Cargo.lock_. This file keeps track of the exact versions of dependencies in your project. . You won’t ever need to change this file manually; Cargo manages its contents for you.

We just built a project with `cargo build` and ran it with `./target/debug/hello_cargo`, but we can also use ==`cargo run`== to compile the code and then run:
```console
$ cargo run
```

Cargo also provides a command called `cargo check`. This command quickly checks your code to make sure it compiles but doesn’t produce an executable:
```console
$ cargo check
   Checking hello_cargo v0.1.0 (file:///projects/hello_cargo)
    Finished dev [unoptimized + debuginfo] target(s) in 0.32 secs
```
Often, `cargo check` is much faster than `cargo build`, If you’re continually checking your work while writing the code, using `cargo check` will speed up the process.

An additional advantage of using Cargo is that the commands are the same no matter which operating system you’re working on.

### Building for Release
When your project is finally ready for release, you can use `cargo build --release` to compile it with optimizations. This command will create an executable in _target/release_ instead of _target/debug_. The optimizations make your Rust code run faster, but turning them on lengthens the time it takes for your program to compile. This is why there are two different profiles: one for development, when you want to rebuild quickly and often, and another for building the final program you’ll give to a user that won’t be rebuilt repeatedly and that will run as fast as possible. If you’re benchmarking your code’s running time, be sure to run `cargo build --release` and benchmark with the executable in _target/release_.

**TL;DR**
- We can create a project using `cargo new`.
- We can build a project using `cargo build`.
- We can build and run a project in one step using `cargo run`.
- We can build a project without producing a binary to check for errors using `cargo check`.
- Instead of saving the result of the build in the same directory as our code, Cargo stores it in the _target/debug_ directory.