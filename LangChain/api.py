import requests
from datetime import datetime

# 替换为你的真实 Authorization 值
AUTHORIZATION = "bce-auth-v1/d3802cd8b367469f8b6a00fa52cdc9d0/2025-01-10T06:51:40Z/1800/host/0909fe84413cd2f651c197c9bd0488fb9cf8086a7a6748e265e83070f1cea6ea"

# 设置 URL 和有效期
url = "https://iam.bj.baidubce.com/v1/BCE-BEARER/token"

# 设置请求头
headers = {
    "Authorization": AUTHORIZATION,
    "Content-Type": "application/json",
}

# 发起 GET 请求
response = requests.get(url, headers=headers)

# 打印响应结果
print("Status Code:", response.status_code)
print("Response Body:", response.text)
