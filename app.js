function setFrame(url) {
    var browserFrame = document.getElementById("browser");
    url = url.replace(/^https?:\/\//,'');
    browserFrame.src = mirror + url;
    return false;
}
function goToURL() {
    setFrame(getInput());
    return false;
}
function pickServer() {
    var servers = [
    "https://foxy-cocci.appspot.com/", 
    "https://foxyfruitytoot.appspot.com/"
    ];
    mirror = servers[Math.floor(Math.random()*servers.length + 1) - 1];
    console.log("Using mirror: " + mirror);
    return mirror
}
function getInput() {
    return document.getElementById("search").value;
}

mirror = pickServer();
setFrame("ohughes343.github.io/mirror/start.html");
