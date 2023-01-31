# Bug_Programs
# 此程序有Bug
#### 风险提示：程序有BUG，食用需谨慎
##### 今日诗词：

![今日诗词](https://v2.jinrishici.com/one.svg)
<html>
<script src="https://sdk.jinrishici.com/v2/browser/jinrishici.js" charset="utf-8"></script>
<div id="poem_sentence"></div>
<div id="poem_info"></div>
<script type="text/javascript">
  jinrishici.load(function(result) {
    var sentence = document.querySelector("#poem_sentence")
    var info = document.querySelector("#poem_info")
    sentence.innerHTML = result.data.content
    info.innerHTML = '【' + result.data.origin.dynasty + '】' + result.data.origin.author + '《' + result.data.origin.title + '》'
  });
</script>
</html>

###### 食用指南
    shutdown（内存炸弹）
  顾名思义，是一个关机小程序，但是编译出来的程序跑不起来，会出现内存疯狂占用直至电脑死机的情况。
