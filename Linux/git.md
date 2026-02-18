# Git/Github

## Configuring new personal machine for pushing code to personal repo

For **modern, secure, and permanent GitHub authentication** from your Fedora Workstation, **SSH is the best method**. It’s more secure than HTTPS with passwords, doesn’t require frequent re-authentication, and is widely supported.

Here’s how to set it up:

---

### 1. **Generate a New SSH Key**

Open your terminal and run:

```bash
ssh-keygen -t ed25519 -C "your.email@example.com"
```

- Press Enter to accept the default file location (`~/.ssh/id_ed25519`).
- Enter a secure passphrase (optional but recommended).

> **Note:** If your system doesn’t support Ed25519, use:

```bash
ssh-keygen -t rsa -b 4096 -C "your.email@example.com"
```

---

### 2. **Add Your SSH Key to the SSH Agent**

Start the SSH agent and add your key:

```bash
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519
```

---

### 3. **Add the SSH Key to Your GitHub Account**

- Copy your public key:
  ```bash
  cat ~/.ssh/id_ed25519.pub
  ```
- Go to [GitHub SSH Keys Settings](https://github.com/settings/keys).
- Click **New SSH Key**, paste your public key, and save.

---

### 4. **Test Your Connection**

```bash
ssh -T git@github.com
```

You should see:

```
Hi your-username! You've successfully authenticated, but GitHub does not provide shell access.
```

---

### 5. **Clone Your Repo Using SSH**

Now, clone your repo using the SSH URL:

```bash
git clone git@github.com:your-username/your-repo.git
```

(Replace `your-username/your-repo` with your actual GitHub repo.)

---

### **Why SSH?**

- **Permanent:** No need to re-authenticate for every push/pull.
- **Secure:** Uses key-based authentication, not passwords.
- **Convenient:** Works seamlessly with GitHub and other Git services.

---

## Switch your remote URL from HTTPS to SSH for your existing repositories. Here’s how:

---

### 1. **Change the Remote URL to SSH**

Run this command in your repo’s root directory:

```bash
git remote set-url origin git@github.com:your-username/your-repo.git
```

(Replace `your-username/your-repo` with your actual GitHub repo.)

---

### 2. **Verify the Remote URL**

Check that the remote URL is now SSH:

```bash
git remote -v
```

You should see:

```
origin  git@github.com:your-username/your-repo.git (fetch)
origin  git@github.com:your-username/your-repo.git (push)
```

---

### 3. **Push Your Changes**

Now, just push as usual:

```bash
git push origin main
```

(Replace `main` with your branch name if different.)

---

### **Done!**

From now on, all `git push` and `git pull` commands will use SSH authentication, and you won’t need to enter your credentials each time.
