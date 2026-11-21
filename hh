<!DOCTYPE html>
<html lang="zh-CN">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width,initial-scale=1">
<title>gaoshujie · 个人主页</title>
<style>
  :root{--bg:#0b0f1a;--surface:#141b2d;--line:#263350;--txt:#e8eefc;--muted:#93a4c4;--accent:#5ad1ff;--accent2:#8a7bff}
  *{margin:0;padding:0;box-sizing:border-box}
  html{scroll-behavior:smooth}
  body{background:var(--bg);color:var(--txt);font-family:system-ui,-apple-system,"PingFang SC","Microsoft YaHei",sans-serif;line-height:1.7;overflow-x:hidden}
  .glow{position:fixed;border-radius:50%;filter:blur(110px);opacity:.22;z-index:-1}
  .glow.a{width:420px;height:420px;background:var(--accent);top:-120px;left:-100px}
  .glow.b{width:380px;height:380px;background:var(--accent2);bottom:-120px;right:-80px}
  nav{max-width:1000px;margin:auto;padding:22px 24px;display:flex;justify-content:space-between;align-items:center}
  .logo{font-weight:700;font-size:19px;letter-spacing:.5px}
  .logo span{color:var(--accent)}
  .nav-links{display:flex;gap:26px}
  .nav-links a{color:var(--muted);text-decoration:none;font-size:14px;transition:.2s}
  .nav-links a:hover{color:var(--accent)}
  header{max-width:1000px;margin:auto;padding:90px 24px 70px;display:flex;align-items:center;gap:50px;flex-wrap:wrap}
  .intro{flex:1;min-width:280px}
  .hi{color:var(--accent);font-size:15px;letter-spacing:2px;margin-bottom:14px}
  h1{font-size:clamp(38px,6vw,68px);line-height:1.1;margin-bottom:18px}
  h1 .name{background:linear-gradient(90deg,var(--accent),var(--accent2));-webkit-background-clip:text;background-clip:text;color:transparent}
  .lead{font-size:18px;color:var(--muted);max-width:520px;margin-bottom:30px}
  .btns{display:flex;gap:14px;flex-wrap:wrap}
  .btn{padding:12px 26px;border-radius:8px;text-decoration:none;font-size:14px;font-weight:600;transition:.2s}
  .btn.primary{background:linear-gradient(90deg,var(--accent),var(--accent2));color:#08101f}
  .btn.primary:hover{transform:translateY(-2px);box-shadow:0 8px 30px rgba(90,209,255,.3)}
  .btn.ghost{border:1px solid var(--line);color:var(--txt)}
  .btn.ghost:hover{border-color:var(--accent);color:var(--accent)}
  .avatar{width:200px;height:200px;border-radius:30px;background:linear-gradient(135deg,var(--accent),var(--accent2));display:flex;align-items:center;justify-content:center;font-size:76px;font-weight:800;color:#08101f;box-shadow:0 20px 60px rgba(90,209,255,.2);transform:rotate(-4deg)}
  section{max-width:1000px;margin:auto;padding:50px 24px}
  .sec-title{font-size:26px;margin-bottom:28px;display:flex;align-items:center;gap:12px}
  .sec-title::before{content:"";width:4px;height:24px;background:linear-gradient(var(--accent),var(--accent2));border-radius:2px}
  .grid{display:grid;grid-template-columns:repeat(auto-fit,minmax(220px,1fr));gap:18px}
  .card{background:var(--surface);border:1px solid var(--line);border-radius:14px;padding:26px;transition:.25s}
  .card:hover{transform:translateY(-5px);border-color:var(--accent);box-shadow:0 12px 40px rgba(0,0,0,.3)}
  .card .icon{font-size:26px;margin-bottom:14px}
  .card h3{font-size:17px;margin-bottom:8px}
  .card p{color:var(--muted);font-size:14px}
  .tags{display:flex;flex-wrap:wrap;gap:10px}
  .tag{background:var(--surface);border:1px solid var(--line);border-radius:20px;padding:8px 16px;font-size:13px;color:var(--muted)}
  .tag:hover{border-color:var(--accent);color:var(--accent)}
  footer{border-top:1px solid var(--line);text-align:center;padding:34px 24px;color:var(--muted);font-size:13px}
  a.github-link{color:var(--accent)}
</style>
</head>
<body>
  <div class="glow a"></div><div class="glow b"></div>
  <nav>
    <div class="logo">gaoshujie<span>.</span></div>
    <div class="nav-links">
      <a href="#about">关于</a>
      <a href="#skills">技能</a>
      <a href="#contact">联系</a>
    </div>
  </nav>

  <header>
    <div class="intro">
      <div class="hi">HELLO, WORLD</div>
      <h1>你好，我是 <span class="name">gaoshujie</span></h1>
      <p class="lead">这是我的个人主页，正在建设中。这里会放我的项目、想法和一些有意思的东西。</p>
      <div class="btns">
        <a class="btn primary" href="#about">了解更多</a>
        <a class="btn ghost" href="https://github.com/gaoshujie" target="_blank">GitHub</a>
      </div>
    </div>
    <div class="avatar">G</div>
  </header>

  <section id="about">
    <div class="sec-title">关于我</div>
    <div class="grid">
      <div class="card"><div class="icon">◎</div><h3>正在探索</h3><p>对 AI、创作工具和新技术保持好奇，喜欢把它们变成实际能用的东西。</p></div>
      <div class="card"><div class="icon">◇</div><h3>在做的事</h3><p>这个页面就是起点。以后我会在这里持续更新我的项目和作品。</p></div>
      <div class="card"><div class="icon">✦</div><h3>联系方式</h3><p>想聊聊？可以通过下方 GitHub 找到我。</p></div>
    </div>
  </section>

  <section id="skills">
    <div class="sec-title">技能与兴趣</div>
    <div class="tags">
      <span class="tag">AI 应用</span><span class="tag">网页开发</span><span class="tag">创意工具</span>
      <span class="tag">产品思维</span><span class="tag">自动化</span><span class="tag">持续学习</span>
    </div>
  </section>

  <section id="contact">
    <div class="sec-title">联系我</div>
    <div class="card">
      <h3>找到我</h3>
      <p>最方便的方式是通过 GitHub：<a class="github-link" href="https://github.com/gaoshujie" target="_blank">github.com/gaoshujie</a></p>
    </div>
  </section>

  <footer>© 2026 gaoshujie · 用 HTML 和一点点好奇心构建</footer>
</body>
</html>
