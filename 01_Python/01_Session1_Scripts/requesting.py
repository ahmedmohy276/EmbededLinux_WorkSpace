import requests
response = requests.get(
    'http://api.aladhan.com/v1/calendarByAddress/2023/8?address=Sultanahmet%20Mosque,%20giza,%20Turkey&method=2')

# Check if the request was successful
if response.status_code == 200:
    data = response.json()
    print(data["data"][0]["timings"])
