  function openApp(id) {
    const win = document.getElementById(id);
    win.classList.remove("hidden");

    const savedPos = localStorage.getItem("window-pos-" + id);
    if (savedPos) {
      const pos = JSON.parse(savedPos);
      win.style.left = pos.left;
      win.style.top = pos.top;
      win.style.width = pos.width;
      win.style.height = pos.height;
    }

    const dockId = id.replace("win", "dock");
    const dockItem = document.querySelector(`#${dockId}`);
    if (dockItem) dockItem.classList.add("active");

    setTimeout(() => {
      win.classList.remove("minimized");
      focusWindow(id);
    }, 10);

    if (id === "win-paint") {
      setTimeout(resizeCanvas, 50);
      canvas.addEventListener("mousedown", startPosition);
      canvas.addEventListener("mouseup", endPosition);
      canvas.addEventListener("mousemove", draw);
    }
  }

  function closeWindow(id) {
    const win = document.getElementById(id);
    win.classList.add("hidden");
    win.classList.add("minimized"); // Reset state

    const dockId = id.replace("win", "dock");
    document.querySelector(`#${dockId}`).classList.remove("active");
    document.getElementById("active-app-name").innerText = "Finder";
    localStorage.removeItem("window-pos-" + id);
    if (id === "win-paint") {
      canvas.removeEventListener("mousedown", startPosition);
      canvas.removeEventListener("mouseup", endPosition);
      canvas.removeEventListener("mousemove", draw);
    }
  }

  function minimizeWindow(id) {
    const win = document.getElementById(id);
    win.classList.add("minimized");
  }

  function maximizeWindow(id) {
    const win = document.getElementById(id);
    if (win.style.width === "100%") {
      win.style.width = win.dataset.prevWidth || "";
      win.style.height = win.dataset.prevHeight || "";
      win.style.top = win.dataset.prevTop || "";
      win.style.left = win.dataset.prevLeft || "";
      win.style.borderRadius = "12px";
    } else {
      win.dataset.prevWidth = win.style.width || win.offsetWidth + "px";
      win.dataset.prevHeight = win.style.height || win.offsetHeight + "px";
      win.dataset.prevTop = win.style.top;
      win.dataset.prevLeft = win.style.left;

      win.style.width = "100%";
      // Reserve space for Dock (approx 80px visual + gap) and Menu (32px)
      // 112px reserved at bottom to prevent overlap
      win.style.height = "calc(100% - 32px - 112px)";
      win.style.top = "32px";
      win.style.left = "0";
      win.style.borderRadius = "0";
    }
    focusWindow(id);
  }

  function deselectAll() {
    document.getElementById("active-app-name").innerText = "Finder";
  }

  function animateBounce(element) {
    const icon = element.querySelector(".dock-icon");

    // reset animation
    icon.classList.remove("animate-bounce-custom");
    void icon.offsetWidth; // trigger reflow

    // add animation
    icon.classList.add("animate-bounce-custom");

    // remove after animation completes to allow hover effects to return
    setTimeout(() => {
      icon.classList.remove("animate-bounce-custom");
    }, 800);
  }

  /* --- APP: CHROME --- */
  const chromeTabs = document.getElementById("chrome-tabs");
  const chromeContent = document.getElementById("chrome-content");
  let activeTab = null;

  function addChromeTab() {
    const tabId = `tab-${Date.now()}`;
    const contentId = `content-${Date.now()}`;

    const newTab = document.createElement("div");
    newTab.className = "bg-[#202124] rounded-t-lg px-4 py-2 text-xs flex items-center w-56 mb-0 h-8 relative bottom-0 text-gray-200 group";
    newTab.dataset.tabId = tabId;
    newTab.innerHTML = `
      <div class="w-2 h-2 bg-blue-500 rounded-full mr-2"></div>
      <span class="truncate w-full font-medium">New Tab</span>
      <span
        class="ml-2 cursor-pointer opacity-0 group-hover:opacity-100 hover:bg-white/20 rounded-full p-0.5 text-[10px]"
        onclick="closeChromeTab('${tabId}')"
        >✕</span
      >
    `;
    chromeTabs.appendChild(newTab);

    const newContent = document.createElement("iframe");
    newContent.id = contentId;
    newContent.className = "w-full h-full border-none hidden";
    newContent.src = "https://www.wikipedia.org";
    chromeContent.appendChild(newContent);

    newTab.addEventListener("click", () => {
      switchChromeTab(tabId);
    });

    switchChromeTab(tabId);
  }

  function switchChromeTab(tabId) {
    if (activeTab) {
      document.querySelector(`[data-tab-id="${activeTab}"]`).classList.remove("bg-[#303134]");
      document.getElementById(activeTab.replace("tab", "content")).classList.add("hidden");
    }
    document.querySelector(`[data-tab-id="${tabId}"]`).classList.add("bg-[#303134]");
    document.getElementById(tabId.replace("tab", "content")).classList.remove("hidden");
    activeTab = tabId;
  }

  function closeChromeTab(tabId) {
    const tab = document.querySelector(`[data-tab-id="${tabId}"]`);
    const content = document.getElementById(tabId.replace("tab", "content"));
    tab.remove();
    content.remove();
    if (activeTab === tabId) {
      const firstTab = document.querySelector("[data-tab-id]");
      if (firstTab) {
        switchChromeTab(firstTab.dataset.tabId);
      } else {
        activeTab = null;
      }
    }
  }

  function loadUrl() {
    const input = document.getElementById("chrome-url");
    let url = input.value;
    if (!url.startsWith("http")) {
      url = "https://" + url;
    }
    if (activeTab) {
      document.getElementById(activeTab.replace("tab", "content")).src = url;
    }
  }

  function reloadIframe() {
    if (activeTab) {
      document.getElementById(activeTab.replace("tab", "content")).src = document.getElementById(activeTab.replace("tab", "content")).src;
    }
  }

  /* --- APP: CALCULATOR --- */
  let calcState = {
    current: "0",
    prev: null,
    op: null,
    newNumber: true,
  };
  const calcHistory = document.getElementById("calc-history");

  function updateCalcDisplay() {
    const display = document.getElementById("calc-display");
    let val = calcState.current;
    if (val.length > 9) val = val.substring(0, 9);
    display.innerText = val;
  }

  function calcNum(num) {
    if (calcState.newNumber) {
      calcState.current = String(num);
      calcState.newNumber = false;
    }
    else {
      if (calcState.current === "0") calcState.current = String(num);
      else calcState.current += num;
    }
    updateCalcDisplay();
  }

  function calcDot() {
    if (calcState.newNumber) {
      calcState.current = "0.";
      calcState.newNumber = false;
    } else if (!calcState.current.includes(".")) {
      calcState.current += ".";
    }
    updateCalcDisplay();
  }

  function calcClear() {
    calcState = { current: "0", prev: null, op: null, newNumber: true };
    updateCalcDisplay();
  }

  function calcToggleSign() {
    calcState.current = String(parseFloat(calcState.current) * -1);
    updateCalcDisplay();
  }

  function calcPercent() {
    calcState.current = String(parseFloat(calcState.current) / 100);
    updateCalcDisplay();
  }

  function calcOp(op) {
    if (calcState.op && !calcState.newNumber) {
      calcEqual();
    }
    calcState.prev = parseFloat(calcState.current);
    calcState.op = op;
    calcState.newNumber = true;
  }

  function calcEqual() {
    if (!calcState.op || calcState.prev === null) return;
    const current = parseFloat(calcState.current);
    let result = 0;
    switch (calcState.op) {
      case "+":
        result = calcState.prev + current;
        break;
      case "-":
        result = calcState.prev - current;
        break;
      case "*":
        result = calcState.prev * current;
        break;
      case "/":
        result = calcState.prev / current;
        break;
    }
    const historyEntry = document.createElement("div");
    historyEntry.innerText = `${calcState.prev} ${calcState.op} ${current} = ${result}`;
    calcHistory.appendChild(historyEntry);
    calcHistory.scrollTop = calcHistory.scrollHeight;

    calcState.current = String(result);
    calcState.op = null;
    calcState.prev = null;
    calcState.newNumber = true;
    updateCalcDisplay();
  }

  function toggleScientific() {
    const scientificCalc = document.getElementById("scientific-calc");
    scientificCalc.classList.toggle("hidden");
    const calcWindow = document.getElementById("win-calc");
    if (scientificCalc.classList.contains("hidden")) {
      calcWindow.style.height = "450px";
    } else {
      calcWindow.style.height = "650px";
    }
  }

  document.addEventListener("keydown", (e) => {
    if (document.getElementById("win-calc").classList.contains("hidden"))
      return;

    if (e.key >= "0" && e.key <= "9") calcNum(e.key);
    if (e.key === ".") calcDot();
    if (e.key === "Enter" || e.key === "=") calcEqual();
    if (e.key === "Backspace") calcClear();
    if (e.key === "+") calcOp("+");
    if (e.key === "-") calcOp("-");
    if (e.key === "*") calcOp("*");
    if (e.key === "/") calcOp("/");
  });

  /* --- APP: WORD --- */
  function formatDoc(cmd, value = null) {
    if (value) {
      document.execCommand(cmd, false, value);
    } else {
      document.execCommand(cmd);
    }
    document.getElementById("word-editor").focus();
  }

  function downloadDoc() {
    const text = document.getElementById("word-editor").innerText;
    const element = document.createElement("a");
    element.setAttribute(
      "href",
      "data:text/plain;charset=utf-8," + encodeURIComponent(text)
    );
    element.setAttribute("download", "Document.txt");
    element.style.display = "none";
    document.body.appendChild(element);
    element.click();
    document.body.removeChild(element);
  }

  function openFile() {
    const input = document.createElement("input");
    input.type = "file";
    input.accept = ".txt, .md, .html";
    input.onchange = (e) => {
      const file = e.target.files[0];
      const reader = new FileReader();
      reader.onload = (e) => {
        document.getElementById("word-editor").innerHTML = e.target.result;
      };
      reader.readAsText(file);
    };
    input.click();
  }

  /* --- APP: PAINT --- */
  const canvas = document.getElementById("paint-canvas");
  const ctx = canvas.getContext("2d");
  let painting = false;
  let isEraser = false;
  let paintTool = "pencil";
  let paintStartX, paintStartY;
  let paintHistory = [];
  let historyIndex = -1;

  function resizeCanvas() {
    const parent = canvas.parentElement;
    const temp = ctx.getImageData(0, 0, canvas.width, canvas.height);
    canvas.width = parent.clientWidth;
    canvas.height = parent.clientHeight;
    ctx.putImageData(temp, 0, 0);
  }

  window.addEventListener("resize", () => {
    if (
      !document.getElementById("win-paint").classList.contains("hidden")
    ) {
      resizeCanvas();
    }
  });

  function startPosition(e) {
    painting = true;
    paintStartX = e.clientX - canvas.getBoundingClientRect().left;
    paintStartY = e.clientY - canvas.getBoundingClientRect().top;
    draw(e);
  }

  function endPosition() {
    painting = false;
    ctx.beginPath();
    if (historyIndex < paintHistory.length - 1) {
      paintHistory = paintHistory.slice(0, historyIndex + 1);
    }
    paintHistory.push(ctx.getImageData(0, 0, canvas.width, canvas.height));
    historyIndex++;
  }

  function draw(e) {
    if (!painting) return;

    const x = e.clientX - canvas.getBoundingClientRect().left;
    const y = e.clientY - canvas.getBoundingClientRect().top;

    ctx.lineWidth = document.getElementById("paint-size").value;
    ctx.lineCap = "round";

    if (isEraser) {
      ctx.globalCompositeOperation = "destination-out";
    } else {
      ctx.globalCompositeOperation = "source-over";
      ctx.strokeStyle = document.getElementById("paint-color").value;
      ctx.fillStyle = document.getElementById("paint-color").value;
    }

    if (paintTool === "pencil") {
      ctx.lineTo(x, y);
      ctx.stroke();
      ctx.beginPath();
      ctx.moveTo(x, y);
    } else if (paintTool === "rect") {
      ctx.putImageData(paintHistory[historyIndex], 0, 0);
      ctx.strokeRect(paintStartX, paintStartY, x - paintStartX, y - paintStartY);
    } else if (paintTool === "circle") {
      ctx.putImageData(paintHistory[historyIndex], 0, 0);
      const radius = Math.sqrt(Math.pow(x - paintStartX, 2) + Math.pow(y - paintStartY, 2));
      ctx.beginPath();
      ctx.arc(paintStartX, paintStartY, radius, 0, 2 * Math.PI);
      ctx.stroke();
    }
  }

  function clearCanvas() {
    ctx.clearRect(0, 0, canvas.width, canvas.height);
    paintHistory = [];
    historyIndex = -1;
  }

  function toggleEraser() {
    isEraser = !isEraser;
    const btn = document.getElementById("eraser-btn");
    if (isEraser) {
      btn.classList.add("ring-2", "ring-indigo-500", "bg-gray-100");
      paintTool = "pencil";
    } else {
      btn.classList.remove("ring-2", "ring-indigo-500", "bg-gray-100");
    }
  }

  function savePainting() {
    const link = document.createElement("a");
    link.download = "sketch.png";
    link.href = canvas.toDataURL();
    link.click();
  }

  function undoPaint() {
    if (historyIndex > 0) {
      historyIndex--;
      ctx.putImageData(paintHistory[historyIndex], 0, 0);
    }
  }

  function redoPaint() {
    if (historyIndex < paintHistory.length - 1) {
      historyIndex++;
      ctx.putImageData(paintHistory[historyIndex], 0, 0);
    }
  }

  function setPaintTool(tool) {
    paintTool = tool;
    isEraser = false;
    document.getElementById("eraser-btn").classList.remove("ring-2", "ring-indigo-500", "bg-gray-100");
  }

  /* --- MENU BAR --- */
  function toggleMenu(menuId) {
    const menu = document.getElementById(menuId);
    menu.classList.toggle("hidden");
  }

  function restart() {
    if (confirm("Are you sure you want to restart?")) {
      location.reload();
    }
  }

  function shutdown() {
    if (confirm("Are you sure you want to shut down?")) {
      window.close();
    }
  }

  window.addEventListener("click", function(e) {
    if (!e.target.closest("#apple-menu") && !e.target.closest(".apple-logo")) {
      document.getElementById("apple-menu").classList.add("hidden");
    }
    if (!e.target.closest("#control-center") && !e.target.closest("[onclick=\"toggleMenu('control-center')\"]")) {
      document.getElementById("control-center").classList.add("hidden");
    }
  });

  /* --- CONTEXT MENU --- */
  const contextMenu = document.getElementById("context-menu");

  document.addEventListener("contextmenu", function(e) {
    e.preventDefault();
    contextMenu.style.top = `${e.clientY}px`;
    contextMenu.style.left = `${e.clientX}px`;
    contextMenu.classList.remove("hidden");
  });

  window.addEventListener("click", function() {
    contextMenu.classList.add("hidden");
  });

  /* --- FINDER --- */
  const fileSystem = {
    "Desktop": {
      "type": "folder",
      "children": {
        "Projects": {
          "type": "folder",
          "children": {}
        },
        "README.md": {
          "type": "file",
          "content": "Welcome to my project!"
        }
      }
    }
  };

  function createFolder() {
    let folderName = "New Folder";
    let i = 1;
    while (fileSystem.Desktop.children[folderName]) {
      folderName = `New Folder ${i}`;
      i++;
    }
    fileSystem.Desktop.children[folderName] = {
      type: "folder",
      children: {}
    };
    renderDesktop();
  }

  function renderDesktop() {
    const desktop = document.getElementById("desktop");
    desktop.innerHTML = ""; // Clear existing icons
    const desktopItems = fileSystem["Desktop"].children;
    for (const itemName in desktopItems) {
      const item = desktopItems[itemName];
      const icon = document.createElement("div");
      icon.className = "desktop-icon";
      const savedIconPos = localStorage.getItem("icon-pos-" + itemName);
      if (savedIconPos) {
        const pos = JSON.parse(savedIconPos);
        icon.style.left = pos.left;
        icon.style.top = pos.top;
      } else {
        icon.style.left = `${Math.random() * 80 + 10}%`;
        icon.style.top = `${Math.random() * 80 + 10}%`;
      }
      icon.innerHTML = `
        <div class="w-16 h-16 ${item.type === 'folder' ? 'bg-blue-500' : 'bg-gray-500'} rounded-lg mb-1"></div>
        <span>${itemName}</span>
      `;

      let isDragging = false;
      let dragStartX, dragStartY;

      icon.addEventListener("mousedown", (e) => {
        isDragging = true;
        dragStartX = e.clientX;
        dragStartY = e.clientY;
        icon.style.zIndex = 1000;
      });

      document.addEventListener("mousemove", (e) => {
        if (isDragging) {
          const dx = e.clientX - dragStartX;
          const dy = e.clientY - dragStartY;
          icon.style.left = `${icon.offsetLeft + dx}px`;
          icon.style.top = `${icon.offsetTop + dy}px`;
          dragStartX = e.clientX;
          dragStartY = e.clientY;
        }
      });

      document.addEventListener("mouseup", () => {
        if (isDragging) {
          isDragging = false;
          icon.style.zIndex = 1;
          localStorage.setItem(
            "icon-pos-" + itemName,
            JSON.stringify({
              left: icon.style.left,
              top: icon.style.top,
            })
          );
        }
      });

      desktop.appendChild(icon);
    }
  }

  renderDesktop();

  document.querySelector("#context-menu a").addEventListener("click", createFolder);

  /* --- BOOT & LOCK SCREEN --- */
  const bootScreen = document.getElementById("boot-screen");
  const bootProgress = document.getElementById("boot-progress");
  const lockScreen = document.getElementById("lock-screen");
  const passwordInput = document.getElementById("password-input");

  window.onload = () => {
    let progress = 0;
    const interval = setInterval(() => {
      progress += Math.random() * 10;
      bootProgress.style.width = `${progress}%`;
      if (progress >= 100) {
        clearInterval(interval);
        setTimeout(() => {
          bootScreen.classList.add("hidden");
          lockScreen.classList.remove("hidden");
          document.body.classList.add("no-dock");
        }, 500);
      }
    }, 200);
  };

  function login() {
    lockScreen.classList.add("hidden");
    document.body.classList.remove("no-dock");
  }

  passwordInput.addEventListener("keydown", (e) => {
    if (e.key === "Enter") {
      login();
    }
  });

  // Assign functions to global scope
  window.login = login;
  window.openApp = openApp;
  window.closeWindow = closeWindow;
  window.minimizeWindow = minimizeWindow;
  window.maximizeWindow = maximizeWindow;
  window.downloadDoc = downloadDoc;
  window.openFile = openFile;
  window.formatDoc = formatDoc;
  window.reloadIframe = reloadIframe;
  window.loadUrl = loadUrl;
  window.calcClear = calcClear;
  window.calcToggleSign = calcToggleSign;
  window.calcPercent = calcPercent;
  window.calcOp = calcOp;
  window.calcNum = calcNum;
  window.calcDot = calcDot;
  window.calcEqual = calcEqual;
  window.toggleScientific = toggleScientific;
  window.toggleEraser = toggleEraser;
  window.clearCanvas = clearCanvas;
  window.savePainting = savePainting;
  window.undoPaint = undoPaint;
  window.redoPaint = redoPaint;
  window.setPaintTool = setPaintTool;
  window.animateBounce = animateBounce;
  window.toggleMenu = toggleMenu;
  window.restart = restart;
  window.shutdown = shutdown;
  window.deselectAll = deselectAll;
  window.focusWindow = focusWindow;

  /* --- APP: TERMINAL --- */
  const terminalOutput = document.getElementById("terminal-output");
  const terminalInput = document.getElementById("terminal-input");
  let currentPath = "Desktop";

  function runTerminalCommand() {
    const command = terminalInput.value;
    terminalInput.value = "";
    const output = document.createElement("div");
    output.innerHTML = `<span class="text-green-400">$ ${command}</span>`;
    terminalOutput.appendChild(output);

    const parts = command.split(" ");
    const cmd = parts[0];
    const args = parts.slice(1);

    switch (cmd) {
      case "ls":
        const items = Object.keys(fileSystem[currentPath].children);
        const itemsDiv = document.createElement("div");
        itemsDiv.innerText = items.join("  ");
        terminalOutput.appendChild(itemsDiv);
        break;
      case "cd":
        if (args[0] === "..") {
          const pathParts = currentPath.split("/");
          pathParts.pop();
          currentPath = pathParts.join("/") || "/";
        } else if (fileSystem[currentPath].children[args[0]] && fileSystem[currentPath].children[args[0]].type === "folder") {
          currentPath = `${currentPath}/${args[0]}`;
        } else {
          const errorDiv = document.createElement("div");
          errorDiv.innerText = `cd: no such file or directory: ${args[0]}`;
          terminalOutput.appendChild(errorDiv);
        }
        break;
      case "echo":
        const echoDiv = document.createElement("div");
        echoDiv.innerText = args.join(" ");
        terminalOutput.appendChild(echoDiv);
        break;
      case "clear":
        terminalOutput.innerHTML = "";
        break;
      default:
        const errorDiv = document.createElement("div");
        errorDiv.innerText = `command not found: ${cmd}`;
        terminalOutput.appendChild(errorDiv);
    }
    terminalOutput.scrollTop = terminalOutput.scrollHeight;
  }
  window.runTerminalCommand = runTerminalCommand;
});