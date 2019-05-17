from bs4 import BeautifulSoup as bs
import requests
import re
from selenium import webdriver
from time import sleep

path = "G:/SKKU/19-1/MachineLearningProject/Project/chromedriver.exe"
driver = webdriver.Chrome(path)
# driver.implicitly_wait(3)
driver.get('https://news.naver.com/main/read.nhn?mode=LSD&mid=sec&sid1=100&oid=008&aid=0004154258')
# driver.get('https://news.naver.com/main/read.nhn?mode=LSD&mid=sec&sid1=100&oid=018&aid=0004378208')
# assert 'Google' in driver.title

# elem = driver.find_element_by_name('q')

# elem.clear()
# elem.send_keys('Selenium')
# elem.submit()

# assert "No results found." not in driver.page_source    
# sleep(3)
driver.find_element_by_xpath("//a[@href='javascript:;']").click()
# sleep(1)
driver.implicitly_wait(1)
html = driver.page_source
driver.implicitly_wait(1)
# sleep(1)
document_content = bs(html, 'html.parser')
# print(document_content)
# 요약문 가져옴
tag_summary = document_content.find_all('div', {'class': '_contents_body'})
# driver.implicitly_wait(1)
print(tag_summary)
# text_summary = ''
# text_summary = text_summary + str(tag_summary[0].find_all(text=True))
# print(text_summary)
# print(tag_summary)

# driver.close()